
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cphy*,int ,int ,int ,int) ;
 int FUNC_1 (struct cphy*,int ) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, 0);
 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3, 0,
       VAR_0 | VAR_1);
 return VAR_5;
}
