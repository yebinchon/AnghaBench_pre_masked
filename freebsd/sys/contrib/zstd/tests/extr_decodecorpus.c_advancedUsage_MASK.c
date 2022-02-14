
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(const char* VAR_0)
{
    FUNC_1(VAR_0);
    FUNC_0( "\n");
    FUNC_0( "Advanced arguments        :\n");
    FUNC_0( " --content-size           : always include the content size in the frame header\n");
    FUNC_0( " --use-dict=#             : include a dictionary used to decompress the corpus\n");
    FUNC_0( " --gen-blocks             : generate raw compressed blocks without block/frame headers\n");
    FUNC_0( " --max-block-size-log=#   : max block size log, must be in range [2, 17]\n");
    FUNC_0( " --max-content-size-log=# : max content size log, must be <= 20\n");
    FUNC_0( "                            (this is ignored with gen-blocks)\n");
}
