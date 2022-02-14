
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {int tv_sec; int tv_usec; } ;
struct rusage {TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct rusage*) ;

__attribute__((used)) static u64 FUNC_2(void)
{
 struct rusage VAR_1;
 u64 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_1);
 FUNC_0(VAR_3);

 VAR_2 = VAR_1.ru_utime.tv_sec*1e9 + VAR_1.ru_utime.tv_usec*1e3;
 VAR_2 += VAR_1.ru_stime.tv_sec*1e9 + VAR_1.ru_stime.tv_usec*1e3;

 return VAR_2;
}
