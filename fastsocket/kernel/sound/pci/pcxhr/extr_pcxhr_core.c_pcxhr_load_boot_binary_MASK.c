
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int addr; } ;
struct pcxhr_mgr {TYPE_1__ hostport; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct pcxhr_mgr*,int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct pcxhr_mgr*,int ,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct pcxhr_mgr*,int ,unsigned int,unsigned int,int ,unsigned char*) ;
 int FUNC_3 (struct pcxhr_mgr*,struct firmware const*) ;
 int FUNC_4 (struct pcxhr_mgr*,int ,int ) ;
 scalar_t__ FUNC_5 (unsigned int) ;

int FUNC_6(struct pcxhr_mgr *VAR_6, const struct firmware *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9 = VAR_6->hostport.addr;
 unsigned char VAR_10;


 if (FUNC_5(VAR_9 & 0xff))
  return -VAR_0;
 FUNC_1(VAR_6, VAR_4, (VAR_9 >> 8));

 VAR_8 = FUNC_4(VAR_6, VAR_1, 0);
 if (VAR_8)
  return VAR_8;

 FUNC_1(VAR_6, VAR_3,
      FUNC_0(VAR_6, VAR_3) & ~VAR_2);

 VAR_8 = FUNC_3(VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 return FUNC_2(VAR_6, VAR_3, VAR_2,
       VAR_2, VAR_5, &VAR_10);
}
