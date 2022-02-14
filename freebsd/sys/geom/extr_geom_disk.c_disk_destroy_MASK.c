
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {int d_destroyed; int * d_devstat; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct disk*) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct disk*,int ,int *) ;

void
FUNC_3(struct disk *VAR_2)
{

 FUNC_1(VAR_2);
 VAR_2->d_destroyed = 1;
 if (VAR_2->d_devstat != ((void*)0))
  FUNC_0(VAR_2->d_devstat);
 FUNC_2(VAR_1, VAR_2, VAR_0, ((void*)0));
}
