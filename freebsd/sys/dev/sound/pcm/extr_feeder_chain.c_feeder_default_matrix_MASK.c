
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pcmchan_matrix {int id; int* offset; int ext; int channels; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct pcmchan_matrix*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct pcmchan_matrix *VAR_1, uint32_t VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->id = VAR_3;
 VAR_1->channels = FUNC_0(VAR_2);
 VAR_1->ext = FUNC_1(VAR_2);
 for (VAR_4 = 0; VAR_4 != VAR_0; VAR_4++)
  VAR_1->offset[VAR_4] = -1;
}
