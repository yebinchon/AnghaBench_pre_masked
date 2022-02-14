
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ isc_uint32_t ;
typedef int isc_result_t ;
struct TYPE_9__ {scalar_t__ maxbits; TYPE_2__* head; } ;
typedef TYPE_1__ isc_radix_tree_t ;
struct TYPE_10__ {scalar_t__ bit; int* node_num; TYPE_3__* prefix; struct TYPE_10__* l; struct TYPE_10__* r; } ;
typedef TYPE_2__ isc_radix_node_t ;
struct TYPE_11__ {scalar_t__ bitlen; int family; } ;
typedef TYPE_3__ isc_prefix_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int * FUNC_6 (TYPE_3__*) ;

isc_result_t
FUNC_7(isc_radix_tree_t *VAR_3, isc_radix_node_t **VAR_4,
   isc_prefix_t *VAR_5)
{
 isc_radix_node_t *VAR_6;
 isc_radix_node_t *VAR_7[VAR_2 + 1];
 u_char *VAR_8;
 isc_uint32_t VAR_9;
 int VAR_10 = -1;
 int VAR_11 = 0;

 FUNC_2(VAR_3 != ((void*)0));
 FUNC_2(VAR_5 != ((void*)0));
 FUNC_2(VAR_4 != ((void*)0) && *VAR_4 == ((void*)0));
 FUNC_3(VAR_5->bitlen <= VAR_3->maxbits);

 *VAR_4 = ((void*)0);

 if (VAR_3->head == ((void*)0)) {
  return (VAR_0);
 }

 VAR_6 = VAR_3->head;
 VAR_8 = FUNC_6(VAR_5);
 VAR_9 = VAR_5->bitlen;

 while (VAR_6->bit < VAR_9) {
  if (VAR_6->prefix)
   VAR_7[VAR_11++] = VAR_6;

  if (FUNC_0(VAR_8[VAR_6->bit >> 3], 0x80 >> (VAR_6->bit & 0x07)))
   VAR_6 = VAR_6->r;
  else
   VAR_6 = VAR_6->l;

  if (VAR_6 == ((void*)0))
   break;
 }

 if (VAR_6 && VAR_6->prefix)
  VAR_7[VAR_11++] = VAR_6;

 while (VAR_11-- > 0) {
  VAR_6 = VAR_7[VAR_11];

  if (FUNC_4(FUNC_5(VAR_6->prefix),
        FUNC_5(VAR_5),
        VAR_6->prefix->bitlen)) {
   if (VAR_6->node_num[FUNC_1(VAR_5->family)] != -1 &&
     ((*VAR_4 == ((void*)0)) ||
      (*VAR_4)->node_num[FUNC_1(VAR_10)] >
       VAR_6->node_num[FUNC_1(VAR_5->family)])) {
    *VAR_4 = VAR_6;
    VAR_10 = VAR_5->family;
   }
  }
 }

 if (*VAR_4 == ((void*)0)) {
  return (VAR_0);
 } else {
  return (VAR_1);
 }
}
