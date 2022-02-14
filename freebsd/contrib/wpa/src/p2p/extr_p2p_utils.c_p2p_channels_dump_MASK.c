
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_reg_class {size_t channels; int * channel; int reg_class; } ;
struct p2p_data {int dummy; } ;
struct p2p_channels {size_t reg_classes; struct p2p_reg_class* reg_class; } ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct p2p_data*,char*,char const*,char*) ;

void FUNC_3(struct p2p_data *VAR_0, const char *VAR_1,
         const struct p2p_channels *VAR_2)
{
 char VAR_3[500], *VAR_4, *VAR_5;
 size_t VAR_6, VAR_7;
 int VAR_8;

 VAR_4 = VAR_3;
 VAR_5 = VAR_4 + sizeof(VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_2->reg_classes; VAR_6++) {
  const struct p2p_reg_class *VAR_9;
  VAR_9 = &VAR_2->reg_class[VAR_6];
  VAR_8 = FUNC_0(VAR_4, VAR_5 - VAR_4, " %u:", VAR_9->reg_class);
  if (FUNC_1(VAR_5 - VAR_4, VAR_8))
   break;
  VAR_4 += VAR_8;

  for (VAR_7 = 0; VAR_7 < VAR_9->channels; VAR_7++) {
   VAR_8 = FUNC_0(VAR_4, VAR_5 - VAR_4, "%s%u",
       VAR_7 == 0 ? "" : ",",
       VAR_9->channel[VAR_7]);
   if (FUNC_1(VAR_5 - VAR_4, VAR_8))
    break;
   VAR_4 += VAR_8;
  }
 }
 *VAR_4 = '\0';

 FUNC_2(VAR_0, "%s:%s", VAR_1, VAR_3);
}
