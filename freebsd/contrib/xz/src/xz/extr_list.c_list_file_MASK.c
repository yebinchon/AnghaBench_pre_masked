
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int idx; } ;
typedef TYPE_1__ xz_file_info ;
typedef int file_pair ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 char const* VAR_8 ;
 int FUNC_12 (TYPE_1__*) ;

extern void
FUNC_13(const char *VAR_9)
{
 if (VAR_5 != VAR_1 && VAR_5 != VAR_0)
  FUNC_5(FUNC_0("--list works only on .xz files "
    "(--format=xz or --format=auto)"));

 FUNC_6(VAR_9);

 if (VAR_9 == VAR_8) {
  FUNC_4(FUNC_0("--list does not support reading from "
    "standard input"));
  return;
 }



 VAR_7 = 0;
 VAR_4 = 1;
 file_pair *VAR_10 = FUNC_2(VAR_9);
 if (VAR_10 == ((void*)0))
  return;

 xz_file_info VAR_11 = VAR_3;
 if (!FUNC_8(&VAR_11, VAR_10)) {
  bool VAR_12;






  if (VAR_6)
   VAR_12 = FUNC_11(&VAR_11, VAR_10);
  else if (FUNC_7() <= VAR_2)
   VAR_12 = FUNC_10(&VAR_11, VAR_10);
  else
   VAR_12 = FUNC_9(&VAR_11, VAR_10);




  if (!VAR_12)
   FUNC_12(&VAR_11);

  FUNC_3(VAR_11.idx, ((void*)0));
 }

 FUNC_1(VAR_10, 0);
 return;
}
