
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_softc {int dummy; } ;
struct sec_session {int dummy; } ;
struct sec_hw_desc {int shd_dir; int shd_mode0; int shd_eu_sel0; } ;
struct sec_desc {struct sec_hw_desc* sd_desc; } ;
struct cryptop {int dummy; } ;
struct cryptodesc {int crd_alg; int crd_flags; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sec_softc*,struct sec_desc*,struct sec_session*,struct cryptop*,struct cryptodesc*,int) ;
 int FUNC_1 (struct sec_softc*,struct sec_desc*,struct sec_session*,struct cryptop*,struct cryptodesc*,struct cryptodesc*,int) ;
 int FUNC_2 (struct cryptop*,struct cryptodesc**,struct cryptodesc**) ;

__attribute__((used)) static int
FUNC_3(struct sec_softc *VAR_6, struct sec_session *VAR_7,
    struct sec_desc *VAR_8, struct cryptop *VAR_9, int VAR_10)
{
 struct sec_hw_desc *VAR_11 = VAR_8->sd_desc;
 struct cryptodesc *VAR_12, *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_2(VAR_9, &VAR_12, &VAR_13);
 if (VAR_14)
  return (VAR_14);

 if (!VAR_12)
  return (VAR_1);

 VAR_11->shd_eu_sel0 = VAR_5;
 VAR_11->shd_mode0 = VAR_2;

 switch (VAR_12->crd_alg) {
 case 129:
  VAR_11->shd_mode0 |= VAR_4;
  break;
 case 128:
  break;
 default:
  return (VAR_1);
 }

 if (VAR_12->crd_flags & VAR_0) {
  VAR_11->shd_mode0 |= VAR_3;
  VAR_11->shd_dir = 0;
 } else
  VAR_11->shd_dir = 1;

 if (VAR_13)
  VAR_14 = FUNC_1(VAR_6, VAR_8, VAR_7, VAR_9, VAR_12, VAR_13,
      VAR_10);
 else
  VAR_14 = FUNC_0(VAR_6, VAR_8, VAR_7, VAR_9, VAR_12,
      VAR_10);

 return (VAR_14);
}
