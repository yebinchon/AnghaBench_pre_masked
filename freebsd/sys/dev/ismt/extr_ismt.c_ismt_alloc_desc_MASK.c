
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ismt_softc {scalar_t__ bus_reserved; scalar_t__ head; struct ismt_desc* desc; } ;
struct ismt_desc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ismt_desc*,int ,int) ;

__attribute__((used)) static struct ismt_desc *
FUNC_2(struct ismt_softc *VAR_2)
{
 struct ismt_desc *VAR_3;

 FUNC_0(VAR_2->bus_reserved == VAR_1,
     ("curthread %p did not request bus (%p has reserved)\n",
     VAR_1, VAR_2->bus_reserved));

 VAR_3 = &VAR_2->desc[VAR_2->head++];
 if (VAR_2->head == VAR_0)
  VAR_2->head = 0;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 return (VAR_3);
}
