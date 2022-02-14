
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_proto {size_t* group_address; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (size_t*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct stp_proto const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_5(const struct stp_proto *VAR_9)
{
 int VAR_10 = 0;

 FUNC_2(&VAR_8);
 if (VAR_5++ == 0) {
  VAR_4 = FUNC_1(VAR_2, VAR_6);
  if (!VAR_4) {
   VAR_10 = -VAR_0;
   goto out;
  }
 }
 if (FUNC_0(VAR_9->group_address))
  FUNC_4(VAR_7, VAR_9);
 else
  FUNC_4(VAR_3[VAR_9->group_address[5] -
            VAR_1], VAR_9);
out:
 FUNC_3(&VAR_8);
 return VAR_10;
}
