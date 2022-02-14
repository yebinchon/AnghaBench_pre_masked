
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct aac_softc {int dummy; } ;
struct aac_sge_ieee1212 {int length; scalar_t__ addrLow; scalar_t__ flags; int addrHigh; } ;
struct aac_raw_io2 {int sgeCnt; int sgeNominalSize; int flags; struct aac_sge_ieee1212* sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aac_sge_ieee1212*,int ) ;
 struct aac_sge_ieee1212* FUNC_1 (int,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct aac_softc *VAR_5, struct aac_raw_io2 *VAR_6,
       int VAR_7, int VAR_8, int VAR_9)
{
 struct aac_sge_ieee1212 *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 u_int32_t VAR_14;

 VAR_10 = FUNC_1(VAR_9 * sizeof(struct aac_sge_ieee1212),
  VAR_0, VAR_1|VAR_2);
 if (VAR_10 == ((void*)0))
  return VAR_8;

 for (VAR_11 = 1, VAR_13 = 1; VAR_11 < VAR_8 - 1; ++VAR_11) {
  for (VAR_12 = 0; VAR_12 < VAR_6->sge[VAR_11].length / (VAR_7*VAR_3); ++VAR_12) {
   VAR_14 = VAR_6->sge[VAR_11].addrLow + VAR_12 * VAR_7 * VAR_3;
   VAR_10[VAR_13].addrLow = VAR_14;
   VAR_10[VAR_13].addrHigh = VAR_6->sge[VAR_11].addrHigh;
   if (VAR_14 < VAR_6->sge[VAR_11].addrLow)
    VAR_10[VAR_13].addrHigh++;
   VAR_10[VAR_13].length = VAR_7 * VAR_3;
   VAR_10[VAR_13].flags = 0;
   VAR_13++;
  }
 }
 VAR_10[VAR_13] = VAR_6->sge[VAR_8-1];
 for (VAR_11 = 1; VAR_11 < VAR_9; ++VAR_11)
  VAR_6->sge[VAR_11] = VAR_10[VAR_11];

 FUNC_0(VAR_10, VAR_0);
 VAR_6->sgeCnt = VAR_9;
 VAR_6->flags |= VAR_4;
 VAR_6->sgeNominalSize = VAR_7 * VAR_3;
 return VAR_9;
}
