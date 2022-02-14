
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int preffered_endian; int mode; } ;
typedef TYPE_1__ _UTF1632EncodingInfo ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_1(_UTF1632EncodingInfo * __restrict VAR_12,
    const void * __restrict VAR_13, size_t VAR_14)
{
 const char *VAR_15;

 VAR_15 = VAR_13;
 while (VAR_14 > 0) {
  switch (*VAR_15) {
  case 'B':
  case 'b':
   FUNC_0(VAR_6, VAR_12->preffered_endian = VAR_0);
   break;
  case 'L':
  case 'l':
   FUNC_0(VAR_9, VAR_12->preffered_endian = VAR_2);
   break;
  case 'i':
  case 'I':
   FUNC_0(VAR_8, VAR_12->preffered_endian = VAR_1);
   break;
  case 's':
  case 'S':
   FUNC_0(VAR_10, VAR_12->preffered_endian = VAR_3);
   break;
  case 'F':
  case 'f':
   FUNC_0(VAR_7, VAR_12->mode |= VAR_4);
   break;
  case 'U':
  case 'u':
   FUNC_0(VAR_11, VAR_12->mode |= VAR_5);
   break;
  }
  VAR_15++;
  VAR_14--;
 }
}
