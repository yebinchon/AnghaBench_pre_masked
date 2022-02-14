
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ecore_ooo_buffer {int rx_buffer_size; void* rx_buffer_virt_addr; int rx_buffer_phys_addr; } ;
struct TYPE_2__ {scalar_t__ conn_type; int rx_num_ooo_buffers; int rx_num_desc; } ;
struct ecore_ll2_info {TYPE_1__ input; } ;
struct ecore_hwfn {int p_ooo_info; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,struct ecore_ooo_buffer*) ;
 struct ecore_ooo_buffer* VAR_7 ;
 struct ecore_ooo_buffer* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,struct ecore_ooo_buffer*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_6(struct ecore_hwfn *VAR_8,
     struct ecore_ll2_info *VAR_9, u16 VAR_10)
{
 struct ecore_ooo_buffer *VAR_11 = VAR_7;
 u32 VAR_12 = 0;
 void *VAR_13;
 u16 VAR_14;
 enum _ecore_status_t VAR_15 = VAR_4;

 if (VAR_9->input.conn_type != VAR_1)
  return VAR_15;


 if (!VAR_9->input.rx_num_ooo_buffers) {
  u16 VAR_16 = VAR_9->input.rx_num_desc;

  if (!VAR_16)
   return VAR_0;
  VAR_9->input.rx_num_ooo_buffers = VAR_16 * 2;
 }


 VAR_12 = VAR_10 + 14 + 4 + 8 + VAR_5;
 VAR_12 = (VAR_12 + VAR_5 - 1) &
    ~(VAR_5 - 1);

 for (VAR_14 = 0; VAR_14 < VAR_9->input.rx_num_ooo_buffers;
      VAR_14++) {
  VAR_11 = FUNC_4(VAR_8->p_dev, VAR_6, sizeof(*VAR_11));
  if (!VAR_11) {
   FUNC_0(VAR_8, 0,
      "Failed to allocate ooo descriptor\n");
   VAR_15 = VAR_3;
   goto out;
  }

  VAR_11->rx_buffer_size = VAR_12;
  VAR_13 = FUNC_2(VAR_8->p_dev,
       &VAR_11->rx_buffer_phys_addr,
       VAR_11->rx_buffer_size);
  if (!VAR_13) {
   FUNC_0(VAR_8, 0,
      "Failed to allocate ooo buffer\n");
   FUNC_3(VAR_8->p_dev, VAR_11);
   VAR_15 = VAR_3;
   goto out;
  }
  VAR_11->rx_buffer_virt_addr = VAR_13;
  FUNC_5(VAR_8->p_ooo_info, VAR_11);
 }

 FUNC_1(VAR_8, VAR_2,
     "Allocated [%04x] LL2 OOO buffers [each of size 0x%08x]\n",
     VAR_9->input.rx_num_ooo_buffers, VAR_12);

out:
 return VAR_15;
}
