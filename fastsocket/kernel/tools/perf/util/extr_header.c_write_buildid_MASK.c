
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int size; int misc; } ;
struct build_id_event {TYPE_1__ header; int pid; int build_id; } ;
typedef int pid_t ;
typedef int b ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,int ) ;
 int FUNC_1 (int,struct build_id_event*,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct build_id_event*,int ,int) ;
 int FUNC_4 (int,char*,size_t,size_t) ;

__attribute__((used)) static int FUNC_5(char *VAR_2, size_t VAR_3, u8 *VAR_4,
    pid_t VAR_5, u16 VAR_6, int VAR_7)
{
 int VAR_8;
 struct build_id_event VAR_9;
 size_t VAR_10;

 VAR_10 = VAR_3 + 1;
 VAR_10 = FUNC_0(VAR_10, VAR_1);

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 FUNC_2(&VAR_9.build_id, VAR_4, VAR_0);
 VAR_9.pid = VAR_5;
 VAR_9.header.misc = VAR_6;
 VAR_9.header.size = sizeof(VAR_9) + VAR_10;

 VAR_8 = FUNC_1(VAR_7, &VAR_9, sizeof(VAR_9));
 if (VAR_8 < 0)
  return VAR_8;

 return FUNC_4(VAR_7, VAR_2, VAR_3 + 1, VAR_10);
}
