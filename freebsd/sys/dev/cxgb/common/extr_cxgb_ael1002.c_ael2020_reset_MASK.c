
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cphy {scalar_t__ modtype; int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cphy*,int ) ;
 int FUNC_1 (struct cphy*) ;
 int VAR_2 ;
 int FUNC_2 (struct cphy*) ;
 int FUNC_3 (struct cphy*,int) ;
 int VAR_3 ;
 int FUNC_4 (struct cphy*,int ,int ,unsigned int*) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct cphy*,int ) ;
 int FUNC_7 (struct cphy*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct cphy *VAR_7, int VAR_8)
{
 int VAR_9;
 unsigned int VAR_10;


 VAR_9 = FUNC_4(VAR_7, VAR_1, VAR_0, &VAR_10);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_7(VAR_7, VAR_1, 125);
 if (VAR_9)
  return VAR_9;
 FUNC_5(100);


 VAR_7->priv = VAR_3;
 VAR_9 = FUNC_6(VAR_7, VAR_2);
 if (VAR_9)
  return VAR_9;
 FUNC_5(100);


 VAR_9 = FUNC_0(VAR_7, 0);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_7->modtype = (u8)VAR_9;
 if (VAR_9 == VAR_4)
  VAR_9 = 0;
 else if (VAR_9 == VAR_5 || VAR_9 == VAR_6)
  VAR_9 = FUNC_3(VAR_7, VAR_9);
 else
  VAR_9 = FUNC_2(VAR_7);
 if (VAR_9)
  return VAR_9;


 if (VAR_10 & 1)
  VAR_9 = FUNC_1(VAR_7);
 return VAR_9;
}
