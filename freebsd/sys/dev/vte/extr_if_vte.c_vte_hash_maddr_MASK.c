
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct vte_maddr_ctx {size_t nperf; int** rxfilt_perf; int* mchash; } ;
struct sockaddr_dl {int dummy; } ;


 int VAR_0 ;
 int* FUNC_0 (struct sockaddr_dl*) ;
 size_t VAR_1 ;
 int FUNC_1 (int*,int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 struct vte_maddr_ctx *VAR_5 = VAR_2;
 uint8_t *VAR_6;
 uint32_t VAR_7;





 if (VAR_5->nperf < VAR_1) {
  VAR_6 = FUNC_0(VAR_3);
  VAR_5->rxfilt_perf[VAR_5->nperf][0] = VAR_6[1] << 8 | VAR_6[0];
  VAR_5->rxfilt_perf[VAR_5->nperf][1] = VAR_6[3] << 8 | VAR_6[2];
  VAR_5->rxfilt_perf[VAR_5->nperf][2] = VAR_6[5] << 8 | VAR_6[4];
  VAR_5->nperf++;

  return (1);
 }
 VAR_7 = FUNC_1(FUNC_0(VAR_3), VAR_0);
 VAR_5->mchash[VAR_7 >> 30] |= 1 << ((VAR_7 >> 26) & 0x0F);

 return (1);
}
