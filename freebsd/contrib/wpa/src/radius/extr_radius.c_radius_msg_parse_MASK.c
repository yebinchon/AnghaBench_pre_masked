
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radius_msg {int * buf; int hdr; } ;
struct radius_hdr {int length; } ;
struct radius_attr_hdr {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 struct radius_msg* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct radius_msg*,struct radius_attr_hdr*) ;
 int FUNC_3 (struct radius_msg*) ;
 scalar_t__ FUNC_4 (struct radius_msg*) ;
 int FUNC_5 (int ,char*,...) ;
 int * FUNC_6 (int const*,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 unsigned char* FUNC_9 (int *) ;

struct radius_msg * FUNC_10(const u8 *VAR_2, size_t VAR_3)
{
 struct radius_msg *VAR_4;
 struct radius_hdr *VAR_5;
 struct radius_attr_hdr *VAR_6;
 size_t VAR_7;
 unsigned char *VAR_8, *VAR_9;

 if (VAR_2 == ((void*)0) || VAR_3 < sizeof(*VAR_5))
  return ((void*)0);

 VAR_5 = (struct radius_hdr *) VAR_2;

 VAR_7 = FUNC_0(VAR_5->length);
 if (VAR_7 < sizeof(*VAR_5) || VAR_7 > VAR_3) {
  FUNC_5(VAR_1, "RADIUS: Invalid message length");
  return ((void*)0);
 }

 if (VAR_7 < VAR_3) {
  FUNC_5(VAR_0, "RADIUS: Ignored %lu extra bytes after "
      "RADIUS message", (unsigned long) VAR_3 - VAR_7);
 }

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->buf = FUNC_6(VAR_2, VAR_7);
 if (VAR_4->buf == ((void*)0) || FUNC_4(VAR_4)) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }
 VAR_4->hdr = FUNC_8(VAR_4->buf);


 VAR_8 = FUNC_9(VAR_4->buf) + sizeof(struct radius_hdr);
 VAR_9 = FUNC_9(VAR_4->buf) + FUNC_7(VAR_4->buf);
 while (VAR_8 < VAR_9) {
  if ((size_t) (VAR_9 - VAR_8) < sizeof(*VAR_6))
   goto fail;

  VAR_6 = (struct radius_attr_hdr *) VAR_8;

  if (VAR_6->length > VAR_9 - VAR_8 || VAR_6->length < sizeof(*VAR_6))
   goto fail;



  if (FUNC_2(VAR_4, VAR_6))
   goto fail;

  VAR_8 += VAR_6->length;
 }

 return VAR_4;

 fail:
 FUNC_3(VAR_4);
 return ((void*)0);
}
