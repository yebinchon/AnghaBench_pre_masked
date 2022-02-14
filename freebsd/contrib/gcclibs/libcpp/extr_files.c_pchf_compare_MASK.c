
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pchf_entry {scalar_t__ once_only; int * sum; int size; } ;
struct pchf_compare_data {int sum_computed; scalar_t__ check_included; int * sum; TYPE_2__* f; int size; } ;
typedef int off_t ;
struct TYPE_3__ {int st_size; } ;
struct TYPE_4__ {TYPE_1__ st; scalar_t__ buffer; } ;
typedef TYPE_2__ _cpp_file ;


 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_2 (const void *VAR_0, const void *VAR_1)
{
  const struct pchf_entry *VAR_2 = (const struct pchf_entry *)VAR_1;
  struct pchf_compare_data *VAR_3 = (struct pchf_compare_data *)VAR_0;
  int VAR_4;

  VAR_4 = FUNC_1 (&VAR_3->size, &VAR_2->size, sizeof (off_t));
  if (VAR_4 != 0)
    return VAR_4;

  if (! VAR_3->sum_computed)
    {
      _cpp_file *const VAR_5 = VAR_3->f;

      FUNC_0 ((const char *)VAR_5->buffer, VAR_5->st.st_size, VAR_3->sum);
      VAR_3->sum_computed = 1;
    }

  VAR_4 = FUNC_1 (VAR_3->sum, VAR_2->sum, 16);
  if (VAR_4 != 0)
    return VAR_4;

  if (VAR_3->check_included || VAR_2->once_only)
    return 0;
  else
    return 1;
}
