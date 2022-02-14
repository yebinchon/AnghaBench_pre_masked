
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct l_dvd_layer {int end_sector_l0; int end_sector; int start_sector; int bca; int linear_density; int track_density; int nlayers; int track_path; int layer_type; int disc_size; int min_rate; int book_type; int book_version; } ;
struct dvd_struct {int format; size_t layer_num; scalar_t__ data; int length; int rmi; int cpst; } ;
struct dvd_layer {int end_sector_l0; int end_sector; int start_sector; int bca; int linear_density; int track_density; int nlayers; int track_path; int layer_type; int disc_size; int max_rate; int book_type; int book_version; } ;
struct TYPE_12__ {int value; int len; } ;
struct TYPE_11__ {int value; int len; } ;
struct TYPE_10__ {int value; } ;
struct TYPE_9__ {int rmi; int cpst; } ;
struct TYPE_8__ {struct l_dvd_layer* layer; } ;
struct TYPE_13__ {TYPE_5__ manufact; TYPE_4__ bca; TYPE_3__ disckey; TYPE_2__ copyright; TYPE_1__ physical; } ;
typedef TYPE_6__ l_dvd_struct ;







 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (struct l_dvd_layer*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct dvd_struct *VAR_1, l_dvd_struct *VAR_2)
{
 switch (VAR_1->format) {
 case 128: {
  struct dvd_layer *VAR_3 = (struct dvd_layer *)VAR_1->data;
  struct l_dvd_layer *VAR_4 = &VAR_2->physical.layer[VAR_1->layer_num];
  FUNC_1(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->book_version = VAR_3->book_version;
  VAR_4->book_type = VAR_3->book_type;
  VAR_4->min_rate = VAR_3->max_rate;
  VAR_4->disc_size = VAR_3->disc_size;
  VAR_4->layer_type = VAR_3->layer_type;
  VAR_4->track_path = VAR_3->track_path;
  VAR_4->nlayers = VAR_3->nlayers;
  VAR_4->track_density = VAR_3->track_density;
  VAR_4->linear_density = VAR_3->linear_density;
  VAR_4->bca = VAR_3->bca;
  VAR_4->start_sector = VAR_3->start_sector;
  VAR_4->end_sector = VAR_3->end_sector;
  VAR_4->end_sector_l0 = VAR_3->end_sector_l0;
  break;
 }
 case 131:
  VAR_2->copyright.cpst = VAR_1->cpst;
  VAR_2->copyright.rmi = VAR_1->rmi;
  break;
 case 130:
  FUNC_0(VAR_2->disckey.value, VAR_1->data, sizeof(VAR_2->disckey.value));
  break;
 case 132:
  VAR_2->bca.len = VAR_1->length;
  FUNC_0(VAR_2->bca.value, VAR_1->data, sizeof(VAR_2->bca.value));
  break;
 case 129:
  VAR_2->manufact.len = VAR_1->length;
  FUNC_0(VAR_2->manufact.value, VAR_1->data,
      sizeof(VAR_2->manufact.value));

  break;
 default:
  return (VAR_0);
 }
 return (0);
}
