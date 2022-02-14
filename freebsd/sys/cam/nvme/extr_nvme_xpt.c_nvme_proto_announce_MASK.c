
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct cam_ed {int nvme_data; int nvme_cdata; } ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct sbuf*) ;
 int FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*,char*,int,int ) ;
 int FUNC_3 (struct sbuf*) ;

__attribute__((used)) static void
FUNC_4(struct cam_ed *VAR_1)
{
 struct sbuf VAR_2;
 char VAR_3[120];

 FUNC_2(&VAR_2, VAR_3, sizeof(VAR_3), VAR_0);
 FUNC_0(VAR_1->nvme_cdata, VAR_1->nvme_data, &VAR_2);
 FUNC_1(&VAR_2);
 FUNC_3(&VAR_2);
}
