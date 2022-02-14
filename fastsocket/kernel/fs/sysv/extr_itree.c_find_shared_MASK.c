
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ sysv_zone_t ;
struct inode {int dummy; } ;
struct TYPE_8__ {scalar_t__ b_data; } ;
struct TYPE_7__ {TYPE_6__* bh; scalar_t__* p; int key; } ;
typedef TYPE_1__ Indirect ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_1__* FUNC_2 (struct inode*,int,int*,TYPE_1__*,int*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static Indirect *FUNC_5(struct inode *VAR_1,
    int VAR_2,
    int VAR_3[],
    Indirect VAR_4[],
    sysv_zone_t *VAR_5)
{
 Indirect *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 *VAR_5 = 0;
 for (VAR_8 = VAR_2; VAR_8 > 1 && !VAR_3[VAR_8-1]; VAR_8--)
  ;

 FUNC_3(&VAR_0);
 VAR_6 = FUNC_2(VAR_1, VAR_8, VAR_3, VAR_4, &VAR_9);
 if (!VAR_6)
  VAR_6 = VAR_4 + VAR_8-1;




 if (!VAR_6->key && *VAR_6->p) {
  FUNC_4(&VAR_0);
  goto no_top;
 }
 for (VAR_7=VAR_6; VAR_7>VAR_4 && FUNC_0((sysv_zone_t*)VAR_7->bh->b_data,VAR_7->p); VAR_7--)
  ;






 if (VAR_7 == VAR_4 + VAR_8 - 1 && VAR_7 > VAR_4) {
  VAR_7->p--;
 } else {
  *VAR_5 = *VAR_7->p;
  *VAR_7->p = 0;
 }
 FUNC_4(&VAR_0);

 while (VAR_6 > VAR_7) {
  FUNC_1(VAR_6->bh);
  VAR_6--;
 }
no_top:
 return VAR_6;
}
