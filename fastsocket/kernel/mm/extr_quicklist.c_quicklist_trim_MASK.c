
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quicklist {unsigned long nr_pages; } ;


 int FUNC_0 (unsigned long) ;
 struct quicklist* FUNC_1 (int ) ;
 long FUNC_2 (struct quicklist*,unsigned long,unsigned long) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 void* FUNC_4 (int,int ,int *) ;

void FUNC_5(int VAR_1, void (*VAR_2)(void *),
 unsigned long VAR_3, unsigned long VAR_4)
{
 long VAR_5;
 struct quicklist *VAR_6;

 VAR_6 = &FUNC_1(VAR_0)[VAR_1];
 if (VAR_6->nr_pages > VAR_3) {
  VAR_5 = FUNC_2(VAR_6, VAR_3, VAR_4);

  while (VAR_5 > 0) {




   void *VAR_7 = FUNC_4(VAR_1, 0, ((void*)0));

   if (VAR_2)
    VAR_2(VAR_7);
   FUNC_0((unsigned long)VAR_7);
   VAR_5--;
  }
 }
 FUNC_3(VAR_0);
}
