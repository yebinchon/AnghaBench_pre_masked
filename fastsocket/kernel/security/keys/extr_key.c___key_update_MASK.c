
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int sem; int flags; TYPE_1__* type; } ;
typedef int key_ref_t ;
struct TYPE_2__ {int (* update ) (struct key*,void const*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct key*) ;
 struct key* FUNC_5 (int ) ;
 int FUNC_6 (struct key*,void const*,size_t) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static inline key_ref_t FUNC_8(key_ref_t VAR_3,
         const void *VAR_4, size_t VAR_5)
{
 struct key *VAR_6 = FUNC_5(VAR_3);
 int VAR_7;


 VAR_7 = FUNC_3(VAR_3, VAR_2);
 if (VAR_7 < 0)
  goto error;

 VAR_7 = -VAR_0;
 if (!VAR_6->type->update)
  goto error;

 FUNC_2(&VAR_6->sem);

 VAR_7 = VAR_6->type->update(VAR_6, VAR_4, VAR_5);
 if (VAR_7 == 0)

  FUNC_1(VAR_1, &VAR_6->flags);

 FUNC_7(&VAR_6->sem);

 if (VAR_7 < 0)
  goto error;
out:
 return VAR_3;

error:
 FUNC_4(VAR_6);
 VAR_3 = FUNC_0(VAR_7);
 goto out;
}
