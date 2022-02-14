
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;



__attribute__((used)) static int FUNC_0(struct timeval *VAR_0)
{
 return !(VAR_0->tv_sec || VAR_0->tv_usec);
}
