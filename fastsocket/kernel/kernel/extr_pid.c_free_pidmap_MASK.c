
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct upid {int nr; TYPE_1__* ns; } ;
struct pidmap {int nr_free; int page; } ;
struct TYPE_2__ {struct pidmap* pidmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct upid *VAR_2)
{
 int VAR_3 = VAR_2->nr;
 struct pidmap *VAR_4 = VAR_2->ns->pidmap + VAR_3 / VAR_0;
 int VAR_5 = VAR_3 & VAR_1;

 FUNC_1(VAR_5, VAR_4->page);
 FUNC_0(&VAR_4->nr_free);
}
