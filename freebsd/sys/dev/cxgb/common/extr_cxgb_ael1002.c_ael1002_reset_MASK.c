
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int modtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cphy*,int) ;
 int FUNC_1 (struct cphy*,int ) ;
 int FUNC_2 (struct cphy*,int ,int ,int) ;
 int FUNC_3 (struct cphy*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct cphy *VAR_6, int VAR_7)
{
 int VAR_8;

 if ((VAR_8 = FUNC_1(VAR_6, 0)) ||
     (VAR_8 = FUNC_2(VAR_6, VAR_5, VAR_4, 1)) ||
     (VAR_8 = FUNC_2(VAR_6, VAR_5, VAR_1, 0)) ||
     (VAR_8 = FUNC_2(VAR_6, VAR_5, VAR_2, 0)) ||
     (VAR_8 = FUNC_2(VAR_6, VAR_5, VAR_3, 0x18)) ||
     (VAR_8 = FUNC_3(VAR_6, VAR_5, VAR_0,
           0, 1 << 5)))
  return VAR_8;

 VAR_8 = FUNC_0(VAR_6, 300);
 if (VAR_8 >= 0)
  VAR_6->modtype = VAR_8;

 return 0;
}
