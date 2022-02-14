
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct md_s {int mediasize; } ;
struct md_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct md_s *VAR_2, struct md_req *VAR_3, struct thread *VAR_4)
{





 if (VAR_2->mediasize <= 0 || (VAR_2->mediasize % VAR_1) != 0)
  return (VAR_0);

 return (0);
}
