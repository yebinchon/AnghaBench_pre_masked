
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sscape_info {int dummy; } ;


 int FUNC_0 (struct sscape_info*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct sscape_info *VAR_0, int VAR_1, int VAR_2)
{
 unsigned char VAR_3[10];

 VAR_3[0] = (unsigned char) (VAR_1 & 0xff);
 VAR_3[1] = (unsigned char) (VAR_2 & 0xff);

 return FUNC_0(VAR_0, VAR_3, 2);
}
