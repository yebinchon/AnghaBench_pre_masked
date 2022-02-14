
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read_data_node {int begin_position; int total_size; void* data; } ;
struct TYPE_2__ {unsigned int nodes; struct archive_read_data_node* dataset; } ;
struct archive_read {TYPE_1__ client; int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 void* FUNC_2 (struct archive_read_data_node*,int) ;

int
FUNC_3(struct archive *VAR_6, void *VAR_7,
    unsigned int VAR_8)
{
 struct archive_read *VAR_9 = (struct archive_read *)VAR_6;
 void *VAR_10;
 unsigned int VAR_11;

 FUNC_0(VAR_6, VAR_2, VAR_3,
     "archive_read_add_callback_data");
 if (VAR_8 > VAR_9->client.nodes) {
  FUNC_1(&VAR_9->archive, VAR_4,
   "Invalid index specified.");
  return VAR_0;
 }
 VAR_10 = FUNC_2(VAR_9->client.dataset, sizeof(*VAR_9->client.dataset)
  * (++(VAR_9->client.nodes)));
 if (VAR_10 == ((void*)0)) {
  FUNC_1(&VAR_9->archive, VAR_5,
   "No memory.");
  return VAR_0;
 }
 VAR_9->client.dataset = (struct archive_read_data_node *)VAR_10;
 for (VAR_11 = VAR_9->client.nodes - 1; VAR_11 > VAR_8 && VAR_11 > 0; VAR_11--) {
  VAR_9->client.dataset[VAR_11].data = VAR_9->client.dataset[VAR_11-1].data;
  VAR_9->client.dataset[VAR_11].begin_position = -1;
  VAR_9->client.dataset[VAR_11].total_size = -1;
 }
 VAR_9->client.dataset[VAR_8].data = VAR_7;
 VAR_9->client.dataset[VAR_8].begin_position = -1;
 VAR_9->client.dataset[VAR_8].total_size = -1;
 return VAR_1;
}
