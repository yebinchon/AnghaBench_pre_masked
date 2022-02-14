
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_cacherep {scalar_t__ c_state; scalar_t__ c_timestamp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_1(struct svc_cacherep *VAR_3)
{
 return VAR_3->c_state != VAR_1 &&
        FUNC_0(VAR_2, VAR_3->c_timestamp + VAR_0);
}
