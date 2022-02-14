
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct trace_probe {int size; } ;
struct TYPE_10__ {int data; int fn; } ;
struct TYPE_8__ {int data; int fn; } ;
struct probe_arg {char const* comm; TYPE_5__ fetch; TYPE_1__ fetch_size; TYPE_2__* type; int offset; } ;
struct TYPE_9__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char const*,TYPE_2__*,TYPE_5__*) ;
 int FUNC_1 (char*,TYPE_2__*,TYPE_5__*,int) ;
 TYPE_2__* FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 char const* FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char const*) ;
 char* FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(char *VAR_5, struct trace_probe *VAR_6,
      struct probe_arg *VAR_7, bool VAR_8)
{
 const char *VAR_9;
 int VAR_10;

 if (FUNC_7(VAR_5) > VAR_4) {
  FUNC_5("Argument is too long.: %s\n", VAR_5);
  return -VAR_2;
 }
 VAR_7->comm = FUNC_4(VAR_5, VAR_3);
 if (!VAR_7->comm) {
  FUNC_5("Failed to allocate memory for command '%s'.\n", VAR_5);
  return -VAR_1;
 }
 VAR_9 = FUNC_6(VAR_7->comm, ':');
 if (VAR_9) {
  VAR_5[VAR_9 - VAR_7->comm] = '\0';
  VAR_9++;
 }
 VAR_7->type = FUNC_2(VAR_9);
 if (!VAR_7->type) {
  FUNC_5("Unsupported type: %s\n", VAR_9);
  return -VAR_0;
 }
 VAR_7->offset = VAR_6->size;
 VAR_6->size += VAR_7->type->size;
 VAR_10 = FUNC_1(VAR_5, VAR_7->type, &VAR_7->fetch, VAR_8);
 if (VAR_10 >= 0 && VAR_9 != ((void*)0))
  VAR_10 = FUNC_0(VAR_9, VAR_7->type, &VAR_7->fetch);
 if (VAR_10 >= 0) {
  VAR_7->fetch_size.fn = FUNC_3(VAR_7->type,
             VAR_7->fetch.fn);
  VAR_7->fetch_size.data = VAR_7->fetch.data;
 }
 return VAR_10;
}
