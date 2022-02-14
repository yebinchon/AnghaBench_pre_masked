
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output {int dummy; } ;


 int FUNC_0 (char*,int,struct output*) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, struct output *VAR_1)
{
 char VAR_2[4];

 VAR_2[0] = '\\';
 VAR_2[1] = (VAR_0 >> 6 & 0x3) + '0';
 VAR_2[2] = (VAR_0 >> 3 & 0x7) + '0';
 VAR_2[3] = (VAR_0 & 0x7) + '0';
 FUNC_0(VAR_2, 4, VAR_1);
}
