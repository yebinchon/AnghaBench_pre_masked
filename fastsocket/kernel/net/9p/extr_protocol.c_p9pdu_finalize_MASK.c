
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fcall {int size; int tag; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct p9_fcall*) ;
 int FUNC_2 (struct p9_fcall*,int ,char*,int) ;

int FUNC_3(struct p9_fcall *VAR_3)
{
 int VAR_4 = VAR_3->size;
 int VAR_5;

 VAR_3->size = 0;
 VAR_5 = FUNC_2(VAR_3, 0, "d", VAR_4);
 VAR_3->size = VAR_4;






 FUNC_0(VAR_0, ">>> size=%d type: %d tag: %d\n", VAR_3->size,
       VAR_3->id, VAR_3->tag);

 return VAR_5;
}
