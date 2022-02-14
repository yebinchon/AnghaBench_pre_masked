
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uintmax_t ;
typedef int uint64_t ;
struct nv {int dummy; } ;
struct hio {int hio_cmd; int hio_error; scalar_t__ hio_seq; int hio_offset; int hio_length; int hio_memsync; } ;
struct hast_resource {int hr_local_sectorsize; int hr_datasize; } ;


 void* VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (struct nv*) ;
 int FUNC_1 (struct nv*,char*) ;
 void* FUNC_2 (struct nv*,char*) ;
 int FUNC_3 (struct nv*,char*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(struct hast_resource *VAR_2, struct hio *VAR_3, struct nv *VAR_4)
{

 VAR_3->hio_cmd = FUNC_3(VAR_4, "cmd");
 if (VAR_3->hio_cmd == 0) {
  FUNC_4("Header contains no 'cmd' field.");
  VAR_3->hio_error = VAR_0;
  goto end;
 }
 if (VAR_3->hio_cmd != 130) {
  VAR_3->hio_seq = FUNC_2(VAR_4, "seq");
  if (VAR_3->hio_seq == 0) {
   FUNC_4("Header contains no 'seq' field.");
   VAR_3->hio_error = VAR_0;
   goto end;
  }
 }
 switch (VAR_3->hio_cmd) {
 case 131:
 case 130:
  break;
 case 128:
  VAR_3->hio_memsync = FUNC_1(VAR_4, "memsync");

 case 129:
 case 132:
  VAR_3->hio_offset = FUNC_2(VAR_4, "offset");
  if (FUNC_0(VAR_4) != 0) {
   FUNC_4("Header is missing 'offset' field.");
   VAR_3->hio_error = VAR_0;
   goto end;
  }
  VAR_3->hio_length = FUNC_2(VAR_4, "length");
  if (FUNC_0(VAR_4) != 0) {
   FUNC_4("Header is missing 'length' field.");
   VAR_3->hio_error = VAR_0;
   goto end;
  }
  if (VAR_3->hio_length == 0) {
   FUNC_4("Data length is zero.");
   VAR_3->hio_error = VAR_0;
   goto end;
  }
  if (VAR_3->hio_cmd != 132 && VAR_3->hio_length > VAR_1) {
   FUNC_4("Data length is too large (%ju > %ju).",
       (uintmax_t)VAR_3->hio_length, (uintmax_t)VAR_1);
   VAR_3->hio_error = VAR_0;
   goto end;
  }
  if ((VAR_3->hio_offset % VAR_2->hr_local_sectorsize) != 0) {
   FUNC_4("Offset %ju is not multiple of sector size.",
       (uintmax_t)VAR_3->hio_offset);
   VAR_3->hio_error = VAR_0;
   goto end;
  }
  if ((VAR_3->hio_length % VAR_2->hr_local_sectorsize) != 0) {
   FUNC_4("Length %ju is not multiple of sector size.",
       (uintmax_t)VAR_3->hio_length);
   VAR_3->hio_error = VAR_0;
   goto end;
  }
  if (VAR_3->hio_offset + VAR_3->hio_length >
      (uint64_t)VAR_2->hr_datasize) {
   FUNC_4("Data offset is too large (%ju > %ju).",
       (uintmax_t)(VAR_3->hio_offset + VAR_3->hio_length),
       (uintmax_t)VAR_2->hr_datasize);
   VAR_3->hio_error = VAR_0;
   goto end;
  }
  break;
 default:
  FUNC_4("Header contains invalid 'cmd' (%hhu).",
      VAR_3->hio_cmd);
  VAR_3->hio_error = VAR_0;
  goto end;
 }
 VAR_3->hio_error = 0;
end:
 return (VAR_3->hio_error);
}
