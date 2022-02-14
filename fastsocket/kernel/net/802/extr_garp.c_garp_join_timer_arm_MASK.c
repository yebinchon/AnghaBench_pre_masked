
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct garp_applicant {int join_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct garp_applicant *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = (u64)FUNC_1(VAR_0) * FUNC_2() >> 32;
 FUNC_0(&VAR_2->join_timer, VAR_1 + VAR_3);
}
