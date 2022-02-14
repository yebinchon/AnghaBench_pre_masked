
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_t ;
typedef TYPE_2__* gss_OID ;
struct TYPE_8__ {size_t length; scalar_t__ elements; } ;
struct TYPE_7__ {void* value; scalar_t__ length; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*,unsigned long) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

OM_uint32
FUNC_6(OM_uint32 *VAR_4, gss_OID VAR_5, gss_buffer_t VAR_6)
{
 char VAR_7[128];
 unsigned long VAR_8;
 int VAR_9;
 size_t VAR_10;
 size_t VAR_11;
 unsigned char *VAR_12;
 char *VAR_13;

 *VAR_4 = 0;
 FUNC_0(VAR_6);

 if (VAR_5 == VAR_1)
  return (VAR_3);




 VAR_10 = 0;
 VAR_8 = 0;
 VAR_9 = 0;
 VAR_12 = (unsigned char *) VAR_5->elements;
 VAR_8 = (unsigned long) VAR_12[0];
 FUNC_2(VAR_7, "%ld ", VAR_8/40);
 VAR_10 += FUNC_5(VAR_7);
 FUNC_2(VAR_7, "%ld ", VAR_8%40);
 VAR_10 += FUNC_5(VAR_7);
 for (VAR_11=1; VAR_11<VAR_5->length; VAR_11++) {
  if ( (size_t) (VAR_9+7) < (sizeof(unsigned long)*8)) {
   VAR_8 = (VAR_8 << 7) | (VAR_12[VAR_11] & 0x7f);
   VAR_9 += 7;
  }
  else {
   *VAR_4 = 0;
   return(VAR_3);
  }
  if ((VAR_12[VAR_11] & 0x80) == 0) {
   FUNC_2(VAR_7, "%ld ", VAR_8);
   VAR_10 += FUNC_5(VAR_7);
   VAR_8 = 0;
   VAR_9 = 0;
  }
 }




 VAR_10 += 4;
 if ((VAR_13 = (char *) FUNC_1(VAR_10))) {
  FUNC_4(VAR_13, "{ ");
  VAR_8 = (unsigned long) VAR_12[0];
  FUNC_2(VAR_7, "%ld ", VAR_8/40);
  FUNC_3(VAR_13, VAR_7);
  FUNC_2(VAR_7, "%ld ", VAR_8%40);
  FUNC_3(VAR_13, VAR_7);
  VAR_8 = 0;
  VAR_12 = (unsigned char *) VAR_5->elements;
  for (VAR_11=1; VAR_11<VAR_5->length; VAR_11++) {
   VAR_8 = (VAR_8 << 7) | (VAR_12[VAR_11] & 0x7f);
   if ((VAR_12[VAR_11] & 0x80) == 0) {
    FUNC_2(VAR_7, "%ld ", VAR_8);
    FUNC_3(VAR_13, VAR_7);
    VAR_8 = 0;
   }
  }
  FUNC_3(VAR_13, "}");
  VAR_6->length = FUNC_5(VAR_13)+1;
  VAR_6->value = (void *) VAR_13;
  *VAR_4 = 0;
  return(VAR_2);
 }
 *VAR_4 = VAR_0;
 return(VAR_3);
}
