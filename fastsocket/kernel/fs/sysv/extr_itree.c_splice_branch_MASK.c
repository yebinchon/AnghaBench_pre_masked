
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_sb; int i_ctime; } ;
struct TYPE_6__ {scalar_t__ key; scalar_t__ bh; scalar_t__* p; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int VAR_2 ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline int FUNC_9(struct inode *VAR_3,
    Indirect VAR_4[],
    Indirect *VAR_5,
    int VAR_6)
{
 int VAR_7;


 FUNC_7(&VAR_2);
 if (!FUNC_6(VAR_4, VAR_5-1) || *VAR_5->p)
  goto changed;
 *VAR_5->p = VAR_5->key;
 FUNC_8(&VAR_2);

 VAR_3->i_ctime = VAR_0;


 if (VAR_5->bh)
  FUNC_2(VAR_5->bh, VAR_3);

 if (FUNC_0(VAR_3))
  FUNC_5(VAR_3);
 else
  FUNC_3(VAR_3);
 return 0;

changed:
 FUNC_8(&VAR_2);
 for (VAR_7 = 1; VAR_7 < VAR_6; VAR_7++)
  FUNC_1(VAR_5[VAR_7].bh);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_4(VAR_3->i_sb, VAR_5[VAR_7].key);
 return -VAR_1;
}
