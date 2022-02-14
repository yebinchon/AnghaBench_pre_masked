
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int hi; int lo; } ;
struct TYPE_6__ {void* lh; void* ll; } ;
struct TYPE_8__ {int Q_s; TYPE_2__ D_s; TYPE_1__ W_s; } ;
typedef TYPE_3__ vint64 ;
typedef int uint32_t ;
typedef void* uint16_t ;
typedef char u_char ;
typedef int res ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,char) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 int FUNC_6 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_7 (char const*) ;
 char FUNC_8 (char const) ;

vint64
FUNC_9(
 const char * VAR_3,
 char ** VAR_4,
 int VAR_5
 )
{
 vint64 VAR_6;
 u_char VAR_7;
 int VAR_8, VAR_9;
 const u_char *VAR_10;

 VAR_9 = VAR_8 = 0;
 VAR_10 = (const u_char*)VAR_3;
 while (FUNC_4(*VAR_10))
  VAR_10++;

 if (*VAR_10 == '-') {
  VAR_10++;
  VAR_8 = 1;
 } else if (*VAR_10 == '+') {
  VAR_10++;
 }

 if (VAR_5 == 0) {
  VAR_5 = 10;
  if (*VAR_10 == '0') {
   VAR_5 = 8;
   if (FUNC_8(*++VAR_10) == 'X') {
    VAR_10++;
    VAR_5 = 16;
   }
  }
 } else if (VAR_5 == 16) {
  if (VAR_10[0] == '0' && FUNC_8(VAR_10[1]) == 'X')
   VAR_10 += 2;
 } else if (VAR_5 <= 2 || VAR_5 > 36) {
  FUNC_6(&VAR_6, 0xFF, sizeof(VAR_6));
  VAR_2 = VAR_1;
  return VAR_6;
 }

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 while (*VAR_10) {
  if (FUNC_2(*VAR_10))
   VAR_7 = *VAR_10 - '0';
  else if (FUNC_5(*VAR_10))
   VAR_7 = *VAR_10 - 'A' + 10;
  else if (FUNC_3(*VAR_10))
   VAR_7 = *VAR_10 - 'a' + 10;
  else
   break;
  if (VAR_7 >= VAR_5)
   break;
  VAR_9 = 1;






  {
   uint32_t VAR_11;
   VAR_11 = (uint32_t)VAR_6.W_s.ll * VAR_5;
   VAR_6.W_s.ll = (uint16_t)VAR_11;
   VAR_11 = (VAR_11 >> 16)
              + (uint32_t)VAR_6.W_s.lh * VAR_5;
   VAR_6.W_s.lh = (uint16_t)VAR_11;

   VAR_6.D_s.hi = VAR_6.D_s.hi * VAR_5 + (VAR_11 >> 16);
  }
  FUNC_0(VAR_6.D_s.hi, VAR_6.D_s.lo, 0, VAR_7);

  VAR_10++;
 }
 if (!VAR_9)
  VAR_2 = VAR_0;
 if (VAR_4)
  *VAR_4 = (char*)FUNC_7(VAR_10);
 if (VAR_8)
  FUNC_1(VAR_6.D_s.hi, VAR_6.D_s.lo);
 return VAR_6;
}
