
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cphy {int priv; scalar_t__ modtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cphy*,int) ;
 int FUNC_1 (struct cphy*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct cphy*,int ,int ,unsigned int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct cphy*) ;

__attribute__((used)) static int FUNC_4(struct cphy *VAR_10)
{
 unsigned int VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;

 VAR_12 = FUNC_2(VAR_10, VAR_2, VAR_0, &VAR_11);
 if (VAR_12)
  return VAR_12;

 if (VAR_11 & (0x1 << VAR_1)) {

  VAR_12 = FUNC_0(VAR_10, 300);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_10->modtype = (u8)VAR_12;
  if (VAR_12 == VAR_7)
   VAR_13 = VAR_10->priv;
  else if (VAR_12 == VAR_8 ||
    VAR_12 == VAR_9)
   VAR_13 = VAR_6;
  else
   VAR_13 = VAR_5;

  if (VAR_13 != VAR_10->priv) {
   VAR_12 = FUNC_1(VAR_10, 0);
   return VAR_12 ? VAR_12 : VAR_4;
  }
  VAR_14 = VAR_4;
 }

 VAR_12 = FUNC_3(VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 |= VAR_14;
 if (!VAR_12)
  VAR_12 |= VAR_3;
 return VAR_12;
}
