
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_counter {int lock; struct res_counter* parent; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct res_counter*,unsigned long) ;
 int FUNC_3 (struct res_counter*,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct res_counter *VAR_0, unsigned long VAR_1,
   struct res_counter **VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;
 struct res_counter *VAR_5, *VAR_6;

 *VAR_2 = ((void*)0);
 FUNC_1(VAR_4);
 for (VAR_5 = VAR_0; VAR_5 != ((void*)0); VAR_5 = VAR_5->parent) {
  FUNC_4(&VAR_5->lock);
  VAR_3 = FUNC_2(VAR_5, VAR_1);
  FUNC_5(&VAR_5->lock);
  if (VAR_3 < 0) {
   *VAR_2 = VAR_5;
   goto undo;
  }
 }
 VAR_3 = 0;
 goto done;
undo:
 for (VAR_6 = VAR_0; VAR_6 != VAR_5; VAR_6 = VAR_6->parent) {
  FUNC_4(&VAR_6->lock);
  FUNC_3(VAR_6, VAR_1);
  FUNC_5(&VAR_6->lock);
 }
done:
 FUNC_0(VAR_4);
 return VAR_3;
}
