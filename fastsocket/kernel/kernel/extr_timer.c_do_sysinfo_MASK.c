
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct sysinfo {unsigned long totalram; unsigned long totalswap; unsigned int mem_unit; unsigned int freeram; unsigned int sharedram; unsigned int bufferram; unsigned int freeswap; unsigned int totalhigh; unsigned int freehigh; int procs; int loads; scalar_t__ uptime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct timespec*) ;
 int FUNC_2 (struct sysinfo*,int ,int) ;
 int FUNC_3 (struct timespec*) ;
 int VAR_2 ;
 int FUNC_4 (struct sysinfo*) ;
 int FUNC_5 (struct sysinfo*) ;

int FUNC_6(struct sysinfo *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7;
 struct timespec VAR_8;

 FUNC_2(VAR_3, 0, sizeof(struct sysinfo));

 FUNC_1(&VAR_8);
 FUNC_3(&VAR_8);
 VAR_3->uptime = VAR_8.tv_sec + (VAR_8.tv_nsec ? 1 : 0);

 FUNC_0(VAR_3->loads, 0, VAR_1 - VAR_0);

 VAR_3->procs = VAR_2;

 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
 VAR_4 = VAR_3->totalram + VAR_3->totalswap;
 if (VAR_4 < VAR_3->totalram || VAR_4 < VAR_3->totalswap)
  goto out;
 VAR_7 = 0;
 VAR_6 = VAR_3->mem_unit;
 while (VAR_6 > 1) {
  VAR_7++;
  VAR_6 >>= 1;
  VAR_5 = VAR_4;
  VAR_4 <<= 1;
  if (VAR_4 < VAR_5)
   goto out;
 }
 VAR_3->mem_unit = 1;
 VAR_3->totalram <<= VAR_7;
 VAR_3->freeram <<= VAR_7;
 VAR_3->sharedram <<= VAR_7;
 VAR_3->bufferram <<= VAR_7;
 VAR_3->totalswap <<= VAR_7;
 VAR_3->freeswap <<= VAR_7;
 VAR_3->totalhigh <<= VAR_7;
 VAR_3->freehigh <<= VAR_7;

out:
 return 0;
}
