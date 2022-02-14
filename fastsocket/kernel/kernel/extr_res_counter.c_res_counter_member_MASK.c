
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_counter {unsigned long long usage; unsigned long long max_usage; unsigned long long limit; unsigned long long failcnt; unsigned long long soft_limit; } ;


 int FUNC_0 () ;






__attribute__((used)) static inline unsigned long long *
FUNC_1(struct res_counter *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 128:
  return &VAR_0->usage;
 case 130:
  return &VAR_0->max_usage;
 case 131:
  return &VAR_0->limit;
 case 132:
  return &VAR_0->failcnt;
 case 129:
  return &VAR_0->soft_limit;
 };

 FUNC_0();
 return ((void*)0);
}
