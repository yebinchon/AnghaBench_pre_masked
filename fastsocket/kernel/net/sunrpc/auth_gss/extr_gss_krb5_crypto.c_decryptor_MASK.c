
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int length; scalar_t__ offset; } ;
struct TYPE_2__ {int tfm; } ;
struct decryptor_desc {int fraglen; int fragno; int * frags; TYPE_1__ desc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (int *,int ,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct scatterlist *VAR_0, void *VAR_1)
{
 struct decryptor_desc *VAR_2 = VAR_1;
 int VAR_3 = VAR_2->fraglen + VAR_0->length;
 int VAR_4, VAR_5;



 FUNC_0(VAR_2->fragno > 3);
 FUNC_6(&VAR_2->frags[VAR_2->fragno], FUNC_5(VAR_0), VAR_0->length,
      VAR_0->offset);
 VAR_2->fragno++;
 VAR_2->fraglen += VAR_0->length;

 VAR_4 = VAR_3 & (FUNC_1(VAR_2->desc.tfm) - 1);
 VAR_3 -= VAR_4;

 if (VAR_3 == 0)
  return 0;

 FUNC_4(&VAR_2->frags[VAR_2->fragno - 1]);

 VAR_5 = FUNC_2(&VAR_2->desc, VAR_2->frags,
       VAR_2->frags, VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_2->frags, 4);

 if (VAR_4) {
  FUNC_6(&VAR_2->frags[0], FUNC_5(VAR_0), VAR_4,
    VAR_0->offset + VAR_0->length - VAR_4);
  VAR_2->fragno = 1;
  VAR_2->fraglen = VAR_4;
 } else {
  VAR_2->fragno = 0;
  VAR_2->fraglen = 0;
 }
 return 0;
}
