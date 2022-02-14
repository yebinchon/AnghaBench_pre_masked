
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
struct archive_string {int dummy; } ;
typedef scalar_t__ intmax_t ;
typedef scalar_t__ INTMAX_MAX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct archive_string*,scalar_t__,unsigned int) ;
 int FUNC_1 (struct archive_string*,char) ;

__attribute__((used)) static void
FUNC_2(struct archive_string *VAR_1, intmax_t VAR_2, unsigned VAR_3)
{
 uintmax_t VAR_4;

 if (VAR_2 < 0) {
  FUNC_1(VAR_1, '-');
  VAR_4 = (VAR_2 == VAR_0) ? (uintmax_t)(INTMAX_MAX) + 1 : (uintmax_t)(-VAR_2);
 } else
  VAR_4 = VAR_2;
 FUNC_0(VAR_1, VAR_4, VAR_3);
}
