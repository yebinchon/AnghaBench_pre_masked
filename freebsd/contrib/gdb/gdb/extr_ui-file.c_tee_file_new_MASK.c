
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct tee_file {int close_one; int close_two; struct ui_file* two; struct ui_file* one; int * magic; } ;


 int FUNC_0 (struct ui_file*,struct tee_file*,int ) ;
 int FUNC_1 (struct ui_file*,int ) ;
 int FUNC_2 (struct ui_file*,int ) ;
 int FUNC_3 (struct ui_file*,int ) ;
 int FUNC_4 (struct ui_file*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ui_file* FUNC_5 () ;
 struct tee_file* FUNC_6 (int) ;

struct ui_file *
FUNC_7 (struct ui_file *VAR_6, int VAR_7,
       struct ui_file *VAR_8, int VAR_9)
{
  struct ui_file *VAR_10 = FUNC_5 ();
  struct tee_file *VAR_11 = FUNC_6 (sizeof (struct tee_file));
  VAR_11->magic = &VAR_4;
  VAR_11->one = VAR_6;
  VAR_11->two = VAR_8;
  VAR_11->close_one = VAR_7;
  VAR_11->close_two = VAR_9;
  FUNC_0 (VAR_10, VAR_11, VAR_0);
  FUNC_1 (VAR_10, VAR_1);
  FUNC_4 (VAR_10, VAR_5);
  FUNC_2 (VAR_10, VAR_2);
  FUNC_3 (VAR_10, VAR_3);
  return VAR_10;
}
