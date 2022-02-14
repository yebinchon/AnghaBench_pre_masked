
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hio {int hio_cmd; unsigned char* hio_data; size_t hio_length; void* hio_error; scalar_t__ hio_offset; } ;
struct hast_resource {int hr_localflush; int hr_localfd; scalar_t__ hr_localoff; int hr_stat_activemap_write_error; int hr_local_sectorsize; int hr_extentsize; scalar_t__ hr_local_mediasize; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ int64_t ;


 void* VAR_0 ;
 void* VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,struct hio*) ;
 int FUNC_2 (int ,struct hio*) ;
 size_t FUNC_3 (scalar_t__,int ,int ) ;
 unsigned char* FUNC_4 (int,size_t) ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_5 (unsigned char*) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,size_t) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ,unsigned char*,size_t,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,unsigned char*,size_t,scalar_t__) ;
 int FUNC_13 (int ,int,int,struct hio*,char*,...) ;
 int VAR_8 ;

__attribute__((used)) static void *
FUNC_14(void *VAR_9)
{
 struct hast_resource *VAR_10 = VAR_9;
 struct hio *VAR_11;
 ssize_t VAR_12;
 bool VAR_13, VAR_14;

 VAR_13 = 1;

 for (;;) {
  FUNC_8(2, "disk: Taking request.");
  FUNC_2(VAR_6, VAR_11);
  while (VAR_13) {
   unsigned char *VAR_15;
   size_t VAR_16;






   VAR_16 =
       FUNC_3(VAR_10->hr_local_mediasize -
       VAR_5, VAR_10->hr_extentsize,
       VAR_10->hr_local_sectorsize);
   VAR_15 = FUNC_4(1, VAR_16);
   if (VAR_15 == ((void*)0)) {
    FUNC_10("Unable to allocate memory to clear local activemap.");
    break;
   }
   if (FUNC_12(VAR_10->hr_localfd, VAR_15, VAR_16,
       VAR_5) != (ssize_t)VAR_16) {
    FUNC_9(VAR_4,
        "Unable to store cleared activemap");
    FUNC_5(VAR_15);
    VAR_10->hr_stat_activemap_write_error++;
    break;
   }
   FUNC_5(VAR_15);
   VAR_13 = 0;
   FUNC_8(1, "Local activemap cleared.");
   break;
  }
  FUNC_13(VAR_2, 2, -1, VAR_11, "disk: (%p) Got request: ", VAR_11);
  VAR_14 = 1;

  switch (VAR_11->hio_cmd) {
  case 129:
   VAR_12 = FUNC_11(VAR_10->hr_localfd, VAR_11->hio_data,
       VAR_11->hio_length,
       VAR_11->hio_offset + VAR_10->hr_localoff);
   if (VAR_12 == -1)
    VAR_11->hio_error = VAR_7;
   else if (VAR_12 != (int64_t)VAR_11->hio_length)
    VAR_11->hio_error = VAR_0;
   else
    VAR_11->hio_error = 0;
   break;
  case 128:
   VAR_12 = FUNC_12(VAR_10->hr_localfd, VAR_11->hio_data,
       VAR_11->hio_length,
       VAR_11->hio_offset + VAR_10->hr_localoff);
   if (VAR_12 == -1)
    VAR_11->hio_error = VAR_7;
   else if (VAR_12 != (int64_t)VAR_11->hio_length)
    VAR_11->hio_error = VAR_0;
   else
    VAR_11->hio_error = 0;
   break;
  case 131:
   VAR_12 = FUNC_6(VAR_10->hr_localfd,
       VAR_11->hio_offset + VAR_10->hr_localoff,
       VAR_11->hio_length);
   if (VAR_12 == -1)
    VAR_11->hio_error = VAR_7;
   else
    VAR_11->hio_error = 0;
   break;
  case 130:
   if (!VAR_10->hr_localflush) {
    VAR_12 = -1;
    VAR_11->hio_error = VAR_1;
    VAR_14 = 0;
    break;
   }
   VAR_12 = FUNC_7(VAR_10->hr_localfd);
   if (VAR_12 == -1) {
    if (VAR_7 == VAR_1)
     VAR_10->hr_localflush = 0;
    VAR_11->hio_error = VAR_7;
   } else {
    VAR_11->hio_error = 0;
   }
   break;
  default:
   FUNC_0("Unexpected command (cmd=%hhu).",
       VAR_11->hio_cmd);
  }
  if (VAR_14 && VAR_11->hio_error != 0) {
   FUNC_13(VAR_3, 0, VAR_11->hio_error, VAR_11,
       "Request failed: ");
  }
  FUNC_8(2, "disk: (%p) Moving request to the send queue.",
      VAR_11);
  FUNC_1(VAR_8, VAR_11);
 }

 return (((void*)0));
}
