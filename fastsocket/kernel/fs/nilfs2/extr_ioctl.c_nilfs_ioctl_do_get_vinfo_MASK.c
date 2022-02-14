
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_segctor_sem; } ;
typedef int ssize_t ;
typedef int __u64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,void*,size_t,size_t) ;
 int FUNC_2 (struct the_nilfs*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct the_nilfs *VAR_0, __u64 *VAR_1, int VAR_2,
    void *VAR_3, size_t VAR_4, size_t VAR_5)
{
 int VAR_6;

 FUNC_0(&VAR_0->ns_segctor_sem);
 VAR_6 = FUNC_1(FUNC_2(VAR_0), VAR_3, VAR_4, VAR_5);
 FUNC_3(&VAR_0->ns_segctor_sem);
 return VAR_6;
}
