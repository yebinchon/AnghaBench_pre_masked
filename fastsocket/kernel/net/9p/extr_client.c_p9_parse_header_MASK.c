
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fcall {int offset; int size; int tag; int id; } ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 int FUNC_1 (struct p9_fcall*,int ,char*,int*,int *,int *) ;

int
FUNC_2(struct p9_fcall *VAR_1, int32_t *VAR_2, int8_t *VAR_3, int16_t *VAR_4,
        int VAR_5)
{
 int8_t VAR_6;
 int16_t VAR_7;
 int32_t VAR_8;
 int VAR_9 = VAR_1->offset;
 int VAR_10;

 VAR_1->offset = 0;
 if (VAR_1->size == 0)
  VAR_1->size = 7;

 VAR_10 = FUNC_1(VAR_1, 0, "dbw", &VAR_8, &VAR_6, &VAR_7);
 if (VAR_10)
  goto rewind_and_exit;

 VAR_1->size = VAR_8;
 VAR_1->id = VAR_6;
 VAR_1->tag = VAR_7;

 FUNC_0(VAR_0, "<<< size=%d type: %d tag: %d\n", VAR_1->size,
       VAR_1->id, VAR_1->tag);

 if (VAR_3)
  *VAR_3 = VAR_6;
 if (VAR_4)
  *VAR_4 = VAR_7;
 if (VAR_2)
  *VAR_2 = VAR_8;


rewind_and_exit:
 if (VAR_5)
  VAR_1->offset = VAR_9;
 return VAR_10;
}
