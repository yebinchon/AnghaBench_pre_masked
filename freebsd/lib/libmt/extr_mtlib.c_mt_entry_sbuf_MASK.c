
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct sbuf {int dummy; } ;
struct mt_status_entry {int var_type; int value; int value_unsigned; int value_signed; } ;
typedef int intmax_t ;




 int FUNC_0 (struct sbuf*,char*,int ) ;

void
FUNC_1(struct sbuf *VAR_0, struct mt_status_entry *VAR_1, char *VAR_2)
{
 switch(VAR_1->var_type) {
 case 129:
  if (VAR_2 != ((void*)0))
   FUNC_0(VAR_0, VAR_2, (intmax_t)VAR_1->value_signed);
  else
   FUNC_0(VAR_0, "%jd",
        (intmax_t)VAR_1->value_signed);
  break;
 case 128:
  if (VAR_2 != ((void*)0))
   FUNC_0(VAR_0, VAR_2, (uintmax_t)VAR_1->value_unsigned);
  else
   FUNC_0(VAR_0, "%ju",
        (uintmax_t)VAR_1->value_unsigned);
  break;
 default:
  if (VAR_2 != ((void*)0))
   FUNC_0(VAR_0, VAR_2, VAR_1->value);
  else
   FUNC_0(VAR_0, "%s", VAR_1->value);
  break;
 }
}
