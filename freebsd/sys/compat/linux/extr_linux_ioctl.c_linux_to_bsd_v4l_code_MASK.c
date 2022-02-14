
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_code {int data; int datasize; int loadwhat; } ;
struct l_video_code {int data; int datasize; int loadwhat; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct l_video_code *VAR_1, struct video_code *VAR_2)
{
 FUNC_1(VAR_2->loadwhat, VAR_1->loadwhat, VAR_0);
 VAR_2->datasize = VAR_1->datasize;
 VAR_2->data = FUNC_0(VAR_1->data);
 return (0);
}
