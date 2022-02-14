
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int tv_sec; scalar_t__ tv_usec; } ;
struct rusage {TYPE_1__ ru_utime; } ;
typedef int salt ;
typedef int key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct rusage*) ;
 int FUNC_1 (int *,int,int *,int,char const*,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_3)
{
 uint8_t VAR_4[VAR_1], VAR_5[VAR_0];
 const char VAR_6[] = "passphrase";
 struct rusage VAR_7, VAR_8;
 int VAR_9;

 FUNC_0(VAR_2, &VAR_7);
 FUNC_1(VAR_4, sizeof(VAR_4), VAR_5, sizeof(VAR_5), VAR_6,
     VAR_3);
 FUNC_0(VAR_2, &VAR_8);

 VAR_9 = VAR_8.ru_utime.tv_sec - VAR_7.ru_utime.tv_sec;
 VAR_9 *= 1000000;
 VAR_9 += VAR_8.ru_utime.tv_usec - VAR_7.ru_utime.tv_usec;
 return (VAR_9);
}
