
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct dieinfo {scalar_t__ at_ordering; char* at_subscr_data; int die_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,struct type*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int VAR_6 ;
 struct type* FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,int ) ;
 struct type* FUNC_6 (int ) ;
 int VAR_7 ;
 unsigned short FUNC_7 (char*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_8 (struct dieinfo *VAR_8)
{
  struct type *VAR_9;
  struct type *VAR_10;
  char *VAR_11;
  char *VAR_12;
  unsigned short VAR_13;
  int VAR_14;

  if (VAR_8->at_ordering != VAR_4)
    {

      FUNC_3 (&VAR_7,
   "DIE @ 0x%x \"%s\", array not row major; not handled correctly",
   VAR_1, VAR_2);
    }
  VAR_11 = VAR_8->at_subscr_data;
  if (VAR_11 != ((void*)0))
    {
      VAR_14 = FUNC_2 (VAR_0);
      VAR_13 = FUNC_7 (VAR_11, VAR_14, VAR_3, VAR_6);
      VAR_12 = VAR_11 + VAR_14 + VAR_13;
      VAR_11 += VAR_14;
      VAR_9 = FUNC_4 (VAR_11, VAR_12);
      VAR_10 = FUNC_6 (VAR_8->die_ref);
      if (VAR_10 == ((void*)0))
 {

   FUNC_1 (VAR_8->die_ref, VAR_9);
 }
      else if (FUNC_0 (VAR_10) == VAR_5)
 {
   *VAR_10 = *VAR_9;
 }
      else
 {


   FUNC_5 (VAR_1, VAR_2);
 }
    }
}
