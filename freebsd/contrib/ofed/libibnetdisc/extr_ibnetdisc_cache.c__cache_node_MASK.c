
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int numports; TYPE_1__** ports; int nodedesc; int info; scalar_t__ type; int guid; int switchinfo; scalar_t__ smaenhsp0; scalar_t__ smalmc; int smalid; } ;
typedef TYPE_2__ ibnd_node_t ;
struct TYPE_4__ {scalar_t__ portnum; int guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_4 (int,scalar_t__*,size_t) ;

__attribute__((used)) static int FUNC_5(int VAR_2, ibnd_node_t * VAR_3)
{
 uint8_t VAR_4[VAR_0];
 size_t VAR_5 = 0;
 size_t VAR_6 = 0;
 uint8_t VAR_7 = 0;
 int VAR_8;

 VAR_5 += FUNC_0(VAR_4 + VAR_5, VAR_3->smalid);
 VAR_5 += FUNC_2(VAR_4 + VAR_5, VAR_3->smalmc);
 VAR_5 += FUNC_2(VAR_4 + VAR_5, (uint8_t) VAR_3->smaenhsp0);
 VAR_5 += FUNC_3(VAR_4 + VAR_5, VAR_3->switchinfo,
    VAR_1);
 VAR_5 += FUNC_1(VAR_4 + VAR_5, VAR_3->guid);
 VAR_5 += FUNC_2(VAR_4 + VAR_5, (uint8_t) VAR_3->type);
 VAR_5 += FUNC_2(VAR_4 + VAR_5, (uint8_t) VAR_3->numports);
 VAR_5 += FUNC_3(VAR_4 + VAR_5, VAR_3->info, VAR_1);
 VAR_5 += FUNC_3(VAR_4 + VAR_5, VAR_3->nodedesc, VAR_1);




 VAR_6 = VAR_5;
 VAR_5 += sizeof(uint8_t);

 for (VAR_8 = 0; VAR_8 <= VAR_3->numports; VAR_8++) {
  if (VAR_3->ports[VAR_8]) {
   VAR_5 += FUNC_1(VAR_4 + VAR_5,
           VAR_3->ports[VAR_8]->guid);
   VAR_5 += FUNC_2(VAR_4 + VAR_5,
          (uint8_t) VAR_3->ports[VAR_8]->portnum);
   VAR_7++;
  }
 }


 FUNC_2(VAR_4 + VAR_6, VAR_7);

 if (FUNC_4(VAR_2, VAR_4, VAR_5) < 0)
  return -1;

 return 0;
}
